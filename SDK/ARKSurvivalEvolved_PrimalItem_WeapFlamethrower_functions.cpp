// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeapFlamethrower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeapFlamethrower.PrimalItem_WeapFlamethrower_C.ExecuteUbergraph_PrimalItem_WeapFlamethrower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeapFlamethrower_C::ExecuteUbergraph_PrimalItem_WeapFlamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeapFlamethrower.PrimalItem_WeapFlamethrower_C.ExecuteUbergraph_PrimalItem_WeapFlamethrower");

	UPrimalItem_WeapFlamethrower_C_ExecuteUbergraph_PrimalItem_WeapFlamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
