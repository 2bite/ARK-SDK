// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Phoenix_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Phoenix.DinoEntry_Phoenix_C.ExecuteUbergraph_DinoEntry_Phoenix
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Phoenix_C::ExecuteUbergraph_DinoEntry_Phoenix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Phoenix.DinoEntry_Phoenix_C.ExecuteUbergraph_DinoEntry_Phoenix");

	UDinoEntry_Phoenix_C_ExecuteUbergraph_DinoEntry_Phoenix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
