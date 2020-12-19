// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Angler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Angler.DinoEntry_Angler_C.ExecuteUbergraph_DinoEntry_Angler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Angler_C::ExecuteUbergraph_DinoEntry_Angler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Angler.DinoEntry_Angler_C.ExecuteUbergraph_DinoEntry_Angler");

	UDinoEntry_Angler_C_ExecuteUbergraph_DinoEntry_Angler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
