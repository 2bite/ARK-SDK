// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_SuperChitin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny_SuperChitin.DinoDeathHarvestingComponent_Tiny_SuperChitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_SuperChitin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_SuperChitin.DinoDeathHarvestingComponent_Tiny_SuperChitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitin");

	UDinoDeathHarvestingComponent_Tiny_SuperChitin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
