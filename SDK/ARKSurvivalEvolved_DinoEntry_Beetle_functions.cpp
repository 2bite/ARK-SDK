// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Beetle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Beetle.DinoEntry_Beetle_C.ExecuteUbergraph_DinoEntry_Beetle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Beetle_C::ExecuteUbergraph_DinoEntry_Beetle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Beetle.DinoEntry_Beetle_C.ExecuteUbergraph_DinoEntry_Beetle");

	UDinoEntry_Beetle_C_ExecuteUbergraph_DinoEntry_Beetle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
