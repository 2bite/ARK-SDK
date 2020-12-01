// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticoreShield.PrimalItemSkin_ManticoreShield_C.ExecuteUbergraph_PrimalItemSkin_ManticoreShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticoreShield_C::ExecuteUbergraph_PrimalItemSkin_ManticoreShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticoreShield.PrimalItemSkin_ManticoreShield_C.ExecuteUbergraph_PrimalItemSkin_ManticoreShield");

	UPrimalItemSkin_ManticoreShield_C_ExecuteUbergraph_PrimalItemSkin_ManticoreShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
