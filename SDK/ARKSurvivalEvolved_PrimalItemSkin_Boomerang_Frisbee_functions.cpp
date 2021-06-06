// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Boomerang_Frisbee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Boomerang_Frisbee.PrimalItemSkin_Boomerang_Frisbee_C.ExecuteUbergraph_PrimalItemSkin_Boomerang_Frisbee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Boomerang_Frisbee_C::ExecuteUbergraph_PrimalItemSkin_Boomerang_Frisbee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Boomerang_Frisbee.PrimalItemSkin_Boomerang_Frisbee_C.ExecuteUbergraph_PrimalItemSkin_Boomerang_Frisbee");

	UPrimalItemSkin_Boomerang_Frisbee_C_ExecuteUbergraph_PrimalItemSkin_Boomerang_Frisbee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
