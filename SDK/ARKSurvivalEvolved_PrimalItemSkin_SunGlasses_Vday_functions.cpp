// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SunGlasses_Vday_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SunGlasses_Vday.PrimalItemSkin_SunGlasses_Vday_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_Vday_C::ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses_Vday.PrimalItemSkin_SunGlasses_Vday_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday");

	UPrimalItemSkin_SunGlasses_Vday_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Vday_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
