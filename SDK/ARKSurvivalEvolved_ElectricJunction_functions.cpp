// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricJunction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricJunction.ElectricJunction_C.UserConstructionScript
// ()

void AElectricJunction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricJunction.ElectricJunction_C.UserConstructionScript");

	AElectricJunction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricJunction.ElectricJunction_C.ExecuteUbergraph_ElectricJunction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricJunction_C::ExecuteUbergraph_ElectricJunction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricJunction.ElectricJunction_C.ExecuteUbergraph_ElectricJunction");

	AElectricJunction_C_ExecuteUbergraph_ElectricJunction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
