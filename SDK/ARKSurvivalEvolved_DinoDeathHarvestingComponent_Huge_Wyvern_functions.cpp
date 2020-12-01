// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Huge_Wyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Huge_Wyvern.DinoDeathHarvestingComponent_Huge_Wyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Wyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Huge_Wyvern_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Wyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Huge_Wyvern.DinoDeathHarvestingComponent_Huge_Wyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Wyvern");

	UDinoDeathHarvestingComponent_Huge_Wyvern_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Wyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
