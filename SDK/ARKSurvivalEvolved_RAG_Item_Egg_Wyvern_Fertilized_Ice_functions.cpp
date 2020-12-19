// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_Item_Egg_Wyvern_Fertilized_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C.ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URAG_Item_Egg_Wyvern_Fertilized_Ice_C::ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_Item_Egg_Wyvern_Fertilized_Ice.RAG_Item_Egg_Wyvern_Fertilized_Ice_C.ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice");

	URAG_Item_Egg_Wyvern_Fertilized_Ice_C_ExecuteUbergraph_RAG_Item_Egg_Wyvern_Fertilized_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
