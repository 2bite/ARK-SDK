// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PressurePlate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PressurePlate.Structure_PressurePlate_C.ReceiveBeginPlay
// ()

void AStructure_PressurePlate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PressurePlate.Structure_PressurePlate_C.ReceiveBeginPlay");

	AStructure_PressurePlate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PressurePlate.Structure_PressurePlate_C.UserConstructionScript
// ()

void AStructure_PressurePlate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PressurePlate.Structure_PressurePlate_C.UserConstructionScript");

	AStructure_PressurePlate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PressurePlate.Structure_PressurePlate_C.ExecuteUbergraph_Structure_PressurePlate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PressurePlate_C::ExecuteUbergraph_Structure_PressurePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PressurePlate.Structure_PressurePlate_C.ExecuteUbergraph_Structure_PressurePlate");

	AStructure_PressurePlate_C_ExecuteUbergraph_Structure_PressurePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
