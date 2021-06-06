// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricCableIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricCableIntersection.ElectricCableIntersection_C.UserConstructionScript
// ()

void AElectricCableIntersection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableIntersection.ElectricCableIntersection_C.UserConstructionScript");

	AElectricCableIntersection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricCableIntersection.ElectricCableIntersection_C.ExecuteUbergraph_ElectricCableIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricCableIntersection_C::ExecuteUbergraph_ElectricCableIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableIntersection.ElectricCableIntersection_C.ExecuteUbergraph_ElectricCableIntersection");

	AElectricCableIntersection_C_ExecuteUbergraph_ElectricCableIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
