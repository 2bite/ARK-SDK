// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Exosuit.DinoEntry_Exosuit_C.ExecuteUbergraph_DinoEntry_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Exosuit_C::ExecuteUbergraph_DinoEntry_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Exosuit.DinoEntry_Exosuit_C.ExecuteUbergraph_DinoEntry_Exosuit");

	UDinoEntry_Exosuit_C_ExecuteUbergraph_DinoEntry_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
