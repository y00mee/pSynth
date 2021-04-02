void CreateScale()
    {
        Scale.clear();
        unsigned int fi = 0x48; // C
        if (k > 0)
            fi = (7 * k) % 12;

        if (m == 1)
            fi -= 3;

        fi = fi % 12;
        if (m == 1)
        {
            Scale.push_back(fi);
            Scale.push_back(fi + 2);
            Scale.push_back(fi + 3);
            Scale.push_back(fi + 5);
            Scale.push_back(fi + 7);
            Scale.push_back(fi + 8);
            Scale.push_back(fi + 11);
        }
        else
            if (m == 0)
            {
                Scale.push_back(fi);
                Scale.push_back(fi + 2);
                Scale.push_back(fi + 4);
                Scale.push_back(fi + 5);
                Scale.push_back(fi + 7);
                Scale.push_back(fi + 9);
                Scale.push_back(fi + 11);

            }
        for (auto& e : Scale)
            e = e % 12;
    }