// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_KaijuOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_KaijuOnly.WoodHarvestComponent_KaijuOnly_C.ExecuteUbergraph_WoodHarvestComponent_KaijuOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_KaijuOnly_C::ExecuteUbergraph_WoodHarvestComponent_KaijuOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_KaijuOnly.WoodHarvestComponent_KaijuOnly_C.ExecuteUbergraph_WoodHarvestComponent_KaijuOnly");

	UWoodHarvestComponent_KaijuOnly_C_ExecuteUbergraph_WoodHarvestComponent_KaijuOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
