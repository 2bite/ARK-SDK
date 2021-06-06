// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_SpineyLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_SpineyLizard.DinoEntry_SpineyLizard_C.ExecuteUbergraph_DinoEntry_SpineyLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_SpineyLizard_C::ExecuteUbergraph_DinoEntry_SpineyLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_SpineyLizard.DinoEntry_SpineyLizard_C.ExecuteUbergraph_DinoEntry_SpineyLizard");

	UDinoEntry_SpineyLizard_C_ExecuteUbergraph_DinoEntry_SpineyLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
