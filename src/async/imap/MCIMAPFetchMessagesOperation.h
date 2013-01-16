//
//  IMAPFetchMessagesOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/12/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __mailcore2__IMAPFetchMessagesOperation__
#define __mailcore2__IMAPFetchMessagesOperation__

#include <mailcore/MCIMAPOperation.h>

namespace mailcore {
    
    class IMAPFetchMessagesOperation : public IMAPOperation {
    private:
        String * mFolder;
        bool mFetchByUidEnabled;
        uint32_t mFirst;
        uint32_t mLast;
        Array * mUids;
        Array * mNumbers;
        IMAPMessagesRequestKind mKind;
        Array * mMessages;
        
    public:
        IMAPFetchMessagesOperation();
        virtual ~IMAPFetchMessagesOperation();
        
        virtual void setFolder(String * folder);
        virtual String * folder();
        
        virtual void setFetchByUidEnabled(bool enabled);
        virtual bool isFetchByUidEnabled();
        
        virtual void setFirst(uint32_t first);
        virtual uint32_t first();
        
        virtual void setLast(uint32_t last);
        virtual uint32_t last();
        
        virtual void setUids(Array * uids);
        virtual Array * uids();
        
        virtual void setNumbers(Array * numbers);
        virtual Array * numbers();
        
        virtual void setKind(IMAPMessagesRequestKind kind);
        virtual IMAPMessagesRequestKind kind();
        
        virtual Array * messages();
        
        virtual void main();
    };
}

#endif /* defined(__mailcore2__IMAPFetchMessagesOperation__) */