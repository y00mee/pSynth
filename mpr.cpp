void WriteVarLen(long value, vector<unsigned char>& b)
        {
            unsigned long long buffer = value & 0x7f;
            while ((value >>= 7) > 0)
            {
                buffer <<= 8;
                buffer |= 0x80;
                buffer += (value & 0x7f);
            }

            for (;;)
            {
                b.push_back((char)buffer);
                if (buffer & 0x80)
                    buffer >>= 8;
                else
                    break;
            }
        }