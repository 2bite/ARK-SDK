// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Jugbug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Jugbug.DinoEntry_Jugbug_C.ExecuteUbergraph_DinoEntry_Jugbug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Jugbug_C::ExecuteUbergraph_DinoEntry_Jugbug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Jugbug.DinoEntry_Jugbug_C.ExecuteUbergraph_DinoEntry_Jugbug");

	UDinoEntry_Jugbug_C_ExecuteUbergraph_DinoEntry_Jugbug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
