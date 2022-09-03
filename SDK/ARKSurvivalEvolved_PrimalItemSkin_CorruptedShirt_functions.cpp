// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CorruptedShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CorruptedShirt.PrimalItemSkin_CorruptedShirt_C.ExecuteUbergraph_PrimalItemSkin_CorruptedShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CorruptedShirt_C::ExecuteUbergraph_PrimalItemSkin_CorruptedShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedShirt.PrimalItemSkin_CorruptedShirt_C.ExecuteUbergraph_PrimalItemSkin_CorruptedShirt");

	UPrimalItemSkin_CorruptedShirt_C_ExecuteUbergraph_PrimalItemSkin_CorruptedShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
