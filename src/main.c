
#include <stdio.h>
#include <stdlib.h>

struct SHARES {
	char* shareId;
	char* shareName;
	char* shareSymbol;
	float* sharePrice;

	struct SHARES* next;
	// void (*DeleteShare)(struct SHARES*);

	// char* (*GetShareId)(struct SHARES*);
	// char* (*GetShareName)(struct SHARES*);
	// char* (*GetShareSymbol)(struct SHARES*);
	// float (*GetSharePrice)(struct SHARES*);

	void (*SetShareId)(struct SHARES*, char*);
	// void (*SetShareName)(struct SHARES*, char*);
	// void (*SetShareSymbol)(struct SHARES*, char*);
	// void (*SetSharePrice)(struct SHARES*, float*);

	// void (*PrintShare)(struct SHARES*);
};

// typedef struct SHARES* SharesPTR;

struct SHARES* Share(); //constructor
// void deleteShare(struct SHARES*); //destructor
// char getId(struct SHARES*);
// char getName(struct SHARES*);
// char getSymbol(struct SHARES*);
// float getPrice(struct SHARES*);

void setId(struct SHARES* this, char* id) { //set
	this->shareId = id;
}

// void setName(struct SHARES*, char*);
// void setSymbol(struct SHARES*, char*);
// void setPrice(struct SHARES*,float*);

// void printShare(struct SHARES*);
// void deleteShare(struct SHARES*);


struct SHARES* Share() {
	struct SHARES* this = (struct SHARES*)malloc(sizeof(struct SHARES));
	// this->shareId = &setId;
	// this->shareName = &setName;
	// this->sharePrice = &setPrice;
	// this->shareSymbol = &setSymbol;
	// this->next = NULL;

	// this->GetShareId = &getId;  //link
	// this->GetShareName = &getName;
	// this->GetSharePrice = &getPrice;
	// this->GetShareSymbol = &getSymbol;

	this->SetShareId = &setId; 
	// this->SetShareName = &setName;
	// this->SetSharePrice = &setPrice;
	// this->SetShareSymbol = &setSymbol;

	// this->PrintShare = &printShare;
	// this->DeleteShare = &deleteShare;
	return this;
}




int main() {
    struct SHARES* a = Share();
    a->SetShareId(a, "");

   return 0;
}
