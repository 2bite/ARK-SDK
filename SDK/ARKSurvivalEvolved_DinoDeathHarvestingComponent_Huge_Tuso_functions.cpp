// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Huge_Tuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Huge_Tuso.DinoDeathHarvestingComponent_Huge_Tuso_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Huge_Tuso_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Huge_Tuso.DinoDeathHarvestingComponent_Huge_Tuso_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso");

	UDinoDeathHarvestingComponent_Huge_Tuso_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
