// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindTurbineEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindTurbineEmitter.WindTurbineEmitter_C.UserConstructionScript
// ()

void AWindTurbineEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTurbineEmitter.WindTurbineEmitter_C.UserConstructionScript");

	AWindTurbineEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTurbineEmitter.WindTurbineEmitter_C.ExecuteUbergraph_WindTurbineEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindTurbineEmitter_C::ExecuteUbergraph_WindTurbineEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTurbineEmitter.WindTurbineEmitter_C.ExecuteUbergraph_WindTurbineEmitter");

	AWindTurbineEmitter_C_ExecuteUbergraph_WindTurbineEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
