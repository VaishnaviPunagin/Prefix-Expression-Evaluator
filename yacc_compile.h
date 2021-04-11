typedef enum { typeCon, typeId, typeOpr } nodeEnum;

typedef struct
{	
	int value; //constants
}conNodeType;

typedef struct
{
	int i; //identifiers
}idNodeType;

typedef struct
{
	//operators
    	int oper;
    	int nops;
    	struct nodeTypeTag *op[1];
}oprNodeType;

typedef struct nodeTypeTag
{
	nodeEnum type;
    	union
    	{
        	conNodeType con;
        	idNodeType id;
        	oprNodeType opr;
    	};
}nodeType;

extern int sym[26];

