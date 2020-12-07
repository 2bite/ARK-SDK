// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_FishMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny_FishMeat.DinoDeathHarvestingComponent_Tiny_FishMeat_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_FishMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_FishMeat_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_FishMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_FishMeat.DinoDeathHarvestingComponent_Tiny_FishMeat_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_FishMeat");

	UDinoDeathHarvestingComponent_Tiny_FishMeat_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_FishMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
