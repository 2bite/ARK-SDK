// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Mega.DinoEntry_Mega_C.ExecuteUbergraph_DinoEntry_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Mega_C::ExecuteUbergraph_DinoEntry_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Mega.DinoEntry_Mega_C.ExecuteUbergraph_DinoEntry_Mega");

	UDinoEntry_Mega_C_ExecuteUbergraph_DinoEntry_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
