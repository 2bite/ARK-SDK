// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricCableDiagonal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricCableDiagonal.ElectricCableDiagonal_C.UserConstructionScript
// ()

void AElectricCableDiagonal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableDiagonal.ElectricCableDiagonal_C.UserConstructionScript");

	AElectricCableDiagonal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricCableDiagonal.ElectricCableDiagonal_C.ExecuteUbergraph_ElectricCableDiagonal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricCableDiagonal_C::ExecuteUbergraph_ElectricCableDiagonal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableDiagonal.ElectricCableDiagonal_C.ExecuteUbergraph_ElectricCableDiagonal");

	AElectricCableDiagonal_C_ExecuteUbergraph_ElectricCableDiagonal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
