// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Element_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Element.LootItemSet_Element_C.ExecuteUbergraph_LootItemSet_Element
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Element_C::ExecuteUbergraph_LootItemSet_Element(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Element.LootItemSet_Element_C.ExecuteUbergraph_LootItemSet_Element");

	ULootItemSet_Element_C_ExecuteUbergraph_LootItemSet_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
