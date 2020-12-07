// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Compy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Compy.DinoEntry_Compy_C.ExecuteUbergraph_DinoEntry_Compy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Compy_C::ExecuteUbergraph_DinoEntry_Compy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Compy.DinoEntry_Compy_C.ExecuteUbergraph_DinoEntry_Compy");

	UDinoEntry_Compy_C_ExecuteUbergraph_DinoEntry_Compy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
