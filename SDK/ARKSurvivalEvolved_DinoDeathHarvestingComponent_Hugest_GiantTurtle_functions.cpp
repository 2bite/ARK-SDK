// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Hugest_GiantTurtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Hugest_GiantTurtle.DinoDeathHarvestingComponent_Hugest_GiantTurtle_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest_GiantTurtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Hugest_GiantTurtle_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest_GiantTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Hugest_GiantTurtle.DinoDeathHarvestingComponent_Hugest_GiantTurtle_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest_GiantTurtle");

	UDinoDeathHarvestingComponent_Hugest_GiantTurtle_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest_GiantTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
