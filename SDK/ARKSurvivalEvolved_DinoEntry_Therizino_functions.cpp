// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Therizino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Therizino.DinoEntry_Therizino_C.ExecuteUbergraph_DinoEntry_Therizino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Therizino_C::ExecuteUbergraph_DinoEntry_Therizino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Therizino.DinoEntry_Therizino_C.ExecuteUbergraph_DinoEntry_Therizino");

	UDinoEntry_Therizino_C_ExecuteUbergraph_DinoEntry_Therizino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
