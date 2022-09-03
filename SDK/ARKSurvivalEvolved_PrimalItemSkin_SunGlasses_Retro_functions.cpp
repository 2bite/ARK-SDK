// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SunGlasses_Retro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SunGlasses_Retro.PrimalItemSkin_SunGlasses_Retro_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Retro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_Retro_C::ExecuteUbergraph_PrimalItemSkin_SunGlasses_Retro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses_Retro.PrimalItemSkin_SunGlasses_Retro_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses_Retro");

	UPrimalItemSkin_SunGlasses_Retro_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Retro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
