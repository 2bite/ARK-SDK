#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_Item_Egg_Wyvern_Fertilized_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C
// 0x0000 (0x09F0 - 0x09F0)
class URAG_Item_Egg_Wyvern_Fertilized_Ice_C : public UPrimalItemConsumable_Egg_Wyvern_Fertilized_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C");
		return ptr;
	}


	void ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
