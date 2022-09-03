// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BurntWoodHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BurntWoodHarvestComponent.BurntWoodHarvestComponent_C.ExecuteUbergraph_BurntWoodHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBurntWoodHarvestComponent_C::ExecuteUbergraph_BurntWoodHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BurntWoodHarvestComponent.BurntWoodHarvestComponent_C.ExecuteUbergraph_BurntWoodHarvestComponent");

	UBurntWoodHarvestComponent_C_ExecuteUbergraph_BurntWoodHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
