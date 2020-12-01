// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Pipe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Pipe.Base_Pipe_C.UserConstructionScript
// ()

void ABase_Pipe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe.Base_Pipe_C.UserConstructionScript");

	ABase_Pipe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe.Base_Pipe_C.ExecuteUbergraph_Base_Pipe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_C::ExecuteUbergraph_Base_Pipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe.Base_Pipe_C.ExecuteUbergraph_Base_Pipe");

	ABase_Pipe_C_ExecuteUbergraph_Base_Pipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
