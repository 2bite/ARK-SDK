// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Mosa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Mosa.DinoEntry_Mosa_C.ExecuteUbergraph_DinoEntry_Mosa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Mosa_C::ExecuteUbergraph_DinoEntry_Mosa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Mosa.DinoEntry_Mosa_C.ExecuteUbergraph_DinoEntry_Mosa");

	UDinoEntry_Mosa_C_ExecuteUbergraph_DinoEntry_Mosa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
