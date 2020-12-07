// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_AI_Controller_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.UserConstructionScript
// ()

void AIguanodon_AI_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.UserConstructionScript");

	AIguanodon_AI_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.ExecuteUbergraph_Iguanodon_AI_Controller
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_AI_Controller_C::ExecuteUbergraph_Iguanodon_AI_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.ExecuteUbergraph_Iguanodon_AI_Controller");

	AIguanodon_AI_Controller_C_ExecuteUbergraph_Iguanodon_AI_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
