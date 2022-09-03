// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fenrir_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fenrir_AIController_BP.Fenrir_AIController_BP_C.UserConstructionScript
// ()

void AFenrir_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_AIController_BP.Fenrir_AIController_BP_C.UserConstructionScript");

	AFenrir_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_AIController_BP.Fenrir_AIController_BP_C.ExecuteUbergraph_Fenrir_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_AIController_BP_C::ExecuteUbergraph_Fenrir_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_AIController_BP.Fenrir_AIController_BP_C.ExecuteUbergraph_Fenrir_AIController_BP");

	AFenrir_AIController_BP_C_ExecuteUbergraph_Fenrir_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
