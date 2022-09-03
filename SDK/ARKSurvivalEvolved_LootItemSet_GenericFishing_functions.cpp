// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_GenericFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_GenericFishing.LootItemSet_GenericFishing_C.ExecuteUbergraph_LootItemSet_GenericFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_GenericFishing_C::ExecuteUbergraph_LootItemSet_GenericFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_GenericFishing.LootItemSet_GenericFishing_C.ExecuteUbergraph_LootItemSet_GenericFishing");

	ULootItemSet_GenericFishing_C_ExecuteUbergraph_LootItemSet_GenericFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
