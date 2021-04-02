    class PIANOROLLCALLBACK
    {
    public:

        virtual HRESULT NoteAdded(PIANOROLL* pr, NOTE*) = 0;
        virtual HRESULT NoteRemoved(PIANOROLL* pr, NOTE*) = 0;
        virtual void RedrawRequest(PIANOROLL* pr, unsigned long long param) = 0;
        virtual HRESULT OnNoteChange(PIANOROLL* pr, NOTE* oldn, NOTE* newn) = 0;
        virtual HRESULT OnNoteSelect(PIANOROLL* pr, NOTE* oldn, bool) = 0;
        virtual void OnPianoOn(PIANOROLL*, int n) = 0;
        virtual void OnPianoOff(PIANOROLL*, int off) = 0;
    };

prx.AddCallback(myPrc);