// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricCableBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricCableBaseBP.ElectricCableBaseBP_C.UserConstructionScript
// ()

void AElectricCableBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableBaseBP.ElectricCableBaseBP_C.UserConstructionScript");

	AElectricCableBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricCableBaseBP.ElectricCableBaseBP_C.ExecuteUbergraph_ElectricCableBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricCableBaseBP_C::ExecuteUbergraph_ElectricCableBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableBaseBP.ElectricCableBaseBP_C.ExecuteUbergraph_ElectricCableBaseBP");

	AElectricCableBaseBP_C_ExecuteUbergraph_ElectricCableBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
