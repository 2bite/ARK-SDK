// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ScorchedSpear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C.ExecuteUbergraph_PrimalItemSkin_ScorchedSpear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ScorchedSpear_C::ExecuteUbergraph_PrimalItemSkin_ScorchedSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C.ExecuteUbergraph_PrimalItemSkin_ScorchedSpear");

	UPrimalItemSkin_ScorchedSpear_C_ExecuteUbergraph_PrimalItemSkin_ScorchedSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
