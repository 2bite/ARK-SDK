// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricGenerator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricGenerator.ElectricGenerator_C.BPOnContainerActiveHealthDecrease
// ()

void AElectricGenerator_C::BPOnContainerActiveHealthDecrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricGenerator.ElectricGenerator_C.BPOnContainerActiveHealthDecrease");

	AElectricGenerator_C_BPOnContainerActiveHealthDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricGenerator.ElectricGenerator_C.UserConstructionScript
// ()

void AElectricGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricGenerator.ElectricGenerator_C.UserConstructionScript");

	AElectricGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricGenerator.ElectricGenerator_C.ExecuteUbergraph_ElectricGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricGenerator_C::ExecuteUbergraph_ElectricGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricGenerator.ElectricGenerator_C.ExecuteUbergraph_ElectricGenerator");

	AElectricGenerator_C_ExecuteUbergraph_ElectricGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
