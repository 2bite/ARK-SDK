// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricShockEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricShockEmitter.ElectricShockEmitter_C.UserConstructionScript
// ()

void AElectricShockEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter.ElectricShockEmitter_C.UserConstructionScript");

	AElectricShockEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricShockEmitter.ElectricShockEmitter_C.ExecuteUbergraph_ElectricShockEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricShockEmitter_C::ExecuteUbergraph_ElectricShockEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter.ElectricShockEmitter_C.ExecuteUbergraph_ElectricShockEmitter");

	AElectricShockEmitter_C_ExecuteUbergraph_ElectricShockEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
