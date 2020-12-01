// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Matinee_HordeMode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Matinee_HordeMode.Matinee_HordeMode_C.UserConstructionScript
// ()

void AMatinee_HordeMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Matinee_HordeMode.Matinee_HordeMode_C.UserConstructionScript");

	AMatinee_HordeMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Matinee_HordeMode.Matinee_HordeMode_C.ExecuteUbergraph_Matinee_HordeMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatinee_HordeMode_C::ExecuteUbergraph_Matinee_HordeMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Matinee_HordeMode.Matinee_HordeMode_C.ExecuteUbergraph_Matinee_HordeMode");

	AMatinee_HordeMode_C_ExecuteUbergraph_Matinee_HordeMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
