// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Huge_Tuso_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Huge_Tuso_Mega.DinoDeathHarvestingComponent_Huge_Tuso_Mega_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Huge_Tuso_Mega_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Huge_Tuso_Mega.DinoDeathHarvestingComponent_Huge_Tuso_Mega_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso_Mega");

	UDinoDeathHarvestingComponent_Huge_Tuso_Mega_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Tuso_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
