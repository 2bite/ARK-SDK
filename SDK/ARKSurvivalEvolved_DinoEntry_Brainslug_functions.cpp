// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Brainslug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Brainslug.DinoEntry_Brainslug_C.ExecuteUbergraph_DinoEntry_Brainslug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Brainslug_C::ExecuteUbergraph_DinoEntry_Brainslug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Brainslug.DinoEntry_Brainslug_C.ExecuteUbergraph_DinoEntry_Brainslug");

	UDinoEntry_Brainslug_C_ExecuteUbergraph_DinoEntry_Brainslug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
