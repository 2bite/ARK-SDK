// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Diplocaulus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Diplocaulus.DinoEntry_Diplocaulus_C.ExecuteUbergraph_DinoEntry_Diplocaulus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Diplocaulus_C::ExecuteUbergraph_DinoEntry_Diplocaulus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Diplocaulus.DinoEntry_Diplocaulus_C.ExecuteUbergraph_DinoEntry_Diplocaulus");

	UDinoEntry_Diplocaulus_C_ExecuteUbergraph_DinoEntry_Diplocaulus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
