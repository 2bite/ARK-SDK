// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Pet_WarnOwnerOfDinos_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.UserConstructionScript
// ()

void ABuff_Pet_WarnOwnerOfDinos_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.UserConstructionScript");

	ABuff_Pet_WarnOwnerOfDinos_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Pet_WarnOwnerOfDinos_C::ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos");

	ABuff_Pet_WarnOwnerOfDinos_C_ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
