// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Ammonite_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Ammonite_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite");

	UDinoDeathHarvestingComponent_Ammonite_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
