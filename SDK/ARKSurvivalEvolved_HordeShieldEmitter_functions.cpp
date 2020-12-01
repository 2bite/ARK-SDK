// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeShieldEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HordeShieldEmitter.HordeShieldEmitter_C.UserConstructionScript
// ()

void AHordeShieldEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeShieldEmitter.HordeShieldEmitter_C.UserConstructionScript");

	AHordeShieldEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeShieldEmitter.HordeShieldEmitter_C.ExecuteUbergraph_HordeShieldEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeShieldEmitter_C::ExecuteUbergraph_HordeShieldEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeShieldEmitter.HordeShieldEmitter_C.ExecuteUbergraph_HordeShieldEmitter");

	AHordeShieldEmitter_C_ExecuteUbergraph_HordeShieldEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
