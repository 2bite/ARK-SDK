// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Enforcer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Enforcer.DinoEntry_Enforcer_C.ExecuteUbergraph_DinoEntry_Enforcer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Enforcer_C::ExecuteUbergraph_DinoEntry_Enforcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Enforcer.DinoEntry_Enforcer_C.ExecuteUbergraph_DinoEntry_Enforcer");

	UDinoEntry_Enforcer_C_ExecuteUbergraph_DinoEntry_Enforcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
