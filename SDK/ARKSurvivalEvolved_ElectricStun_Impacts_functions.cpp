// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricStun_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricStun_Impacts.ElectricStun_Impacts_C.UserConstructionScript
// ()

void AElectricStun_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricStun_Impacts.ElectricStun_Impacts_C.UserConstructionScript");

	AElectricStun_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricStun_Impacts.ElectricStun_Impacts_C.ExecuteUbergraph_ElectricStun_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricStun_Impacts_C::ExecuteUbergraph_ElectricStun_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricStun_Impacts.ElectricStun_Impacts_C.ExecuteUbergraph_ElectricStun_Impacts");

	AElectricStun_Impacts_C_ExecuteUbergraph_ElectricStun_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
