// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatfrom_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C.UserConstructionScript
// ()

void AElevatorPlatfrom_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C.UserConstructionScript");

	AElevatorPlatfrom_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C.ExecuteUbergraph_ElevatorPlatfrom_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorPlatfrom_Large_C::ExecuteUbergraph_ElevatorPlatfrom_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C.ExecuteUbergraph_ElevatorPlatfrom_Large");

	AElevatorPlatfrom_Large_C_ExecuteUbergraph_ElevatorPlatfrom_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
