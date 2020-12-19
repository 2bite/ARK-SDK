#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TekAlarm_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings
struct AStructure_TekAlarm_C_InitSavedTribeLoggingSettings_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation
struct AStructure_TekAlarm_C_GetNextRotation_Params
{
	struct FRotator                                    CurrentRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecrease;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NextRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation
struct AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxRotation_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation
struct AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxRotation_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation
struct AStructure_TekAlarm_C_UpdateAutoDeactivation_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange
struct AStructure_TekAlarm_C_GetTargetTypesToChange_Params
{
	TArray<TEnumAsByte<ETekAlarmTargetTypes>>          ActiveTypes;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       ShouldActivate;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink
struct AStructure_TekAlarm_C_ToggleKeypadLink_Params
{
	class AShooterPlayerController*                    OptionalShooterPC;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp
struct AStructure_TekAlarm_C_AlignBoxedToWorldUp_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent
struct AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxExtent_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent
struct AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxExtent_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box
struct AStructure_TekAlarm_C_Is_Target_Detect_Box_Params
{
	bool                                               bIsBox;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox
struct AStructure_TekAlarm_C_IsStructureDetectBox_Params
{
	bool                                               bIsBox;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent
struct AStructure_TekAlarm_C_SetTargetDetectBoxExtent_Params
{
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius
struct AStructure_TekAlarm_C_Set_Target_Detect_Sphere_Radius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent
struct AStructure_TekAlarm_C_SetStructureDetectBoxExtent_Params
{
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius
struct AStructure_TekAlarm_C_SetStructureDetectSphereRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting
struct AStructure_TekAlarm_C_GetTribeLoggingSetting_Params
{
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Integer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings
struct AStructure_TekAlarm_C_MakeReplicatedTribeLoggingSettings_Params
{
	int                                                TribeLoggingSettings;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger
struct AStructure_TekAlarm_C_GetMappedTribeLoggingInteger_Params
{
	int                                                TribeLoggingState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TribeLoggingInteger;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam
struct AStructure_TekAlarm_C_BPChangedActorTeam_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed
struct AStructure_TekAlarm_C_ReceiveDestroyed_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet
struct AStructure_TekAlarm_C_Has_Any_PINsSet_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals
struct AStructure_TekAlarm_C_OnRep_ShowAreaVisuals_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility
struct AStructure_TekAlarm_C_UpdateAreaVisualsVisibility_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated
struct AStructure_TekAlarm_C_BPContainerDeactivated_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType
struct AStructure_TekAlarm_C_GetTribeLoggingSettingForTargetType_Params
{
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType
struct AStructure_TekAlarm_C_GetTribeLogNameForType_Params
{
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging
struct AStructure_TekAlarm_C_TryTribeLogging_Params
{
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting
struct AStructure_TekAlarm_C_GetNextTribeLoggingSetting_Params
{
	int                                                CurrentSetting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String
struct AStructure_TekAlarm_C_GetTribe_Logging_String_Params
{
	class FString                                      TypeName;                                                 // (Parm, ZeroConstructor)
	int                                                CooldownInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation
struct AStructure_TekAlarm_C_HasPendingPINActivation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType
struct AStructure_TekAlarm_C_GetPINDataByType_Params
{
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTekAlarmPINData                            ret;                                                      // (Parm, OutParm)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData
struct AStructure_TekAlarm_C_SetPINCodeInPINData_Params
{
	int                                                pinCode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETekAlarmTargetTypes>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay
struct AStructure_TekAlarm_C_GetMultiUseTitleWithDelay_Params
{
	float                                              DelaySeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN
struct AStructure_TekAlarm_C_GetPINDataByPIN_Params
{
	int                                                PIN;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTekAlarmPINData                            Res;                                                      // (Parm, OutParm)
	int                                                retIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay
struct AStructure_TekAlarm_C_CalcuateDelay_Params
{
	float                                              CurrentDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewDelay;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString
struct AStructure_TekAlarm_C_PinCodeFlagsToString_Params
{
	int                                                PinCodesFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered
struct AStructure_TekAlarm_C_Was_Pin_Code_Bit_Triggered_Params
{
	int                                                Bit;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Activated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Deactivated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode
struct AStructure_TekAlarm_C_IsRelevantPinCode_Params
{
	int                                                pinCode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeactivation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible
struct AStructure_TekAlarm_C_IsAreaVisualsLocallyVisible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn
struct AStructure_TekAlarm_C_CalcuateMeshAlpha_Fn_Params
{
	class UStaticMeshComponent*                        Mesh1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TimeSince;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated
struct AStructure_TekAlarm_C_BPContainerActivated_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure
struct AStructure_TekAlarm_C_SetActivateStateToStructure_Params
{
	class APrimalStructure*                            PrimalStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               toggle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewActivateState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area
struct AStructure_TekAlarm_C_Get_Octree_Data_For_Structure_Detect_Area_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State
struct AStructure_TekAlarm_C_Update_Structures_in_Area_to_Goal_State_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere
struct AStructure_TekAlarm_C_Update_Structure_Detect_Sphere_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox
struct AStructure_TekAlarm_C_UpdateStructureDetectBox_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle
struct AStructure_TekAlarm_C_SwitchStructureDetectStyle_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea
struct AStructure_TekAlarm_C_IsActorInBoxArea_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType
struct AStructure_TekAlarm_C_GetOctreeCheckType_Params
{
	TEnumAsByte<EServerOctreeGroup>                    Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area
struct AStructure_TekAlarm_C_Get_Octree_Data_ForTarget_Detect_Area_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area
struct AStructure_TekAlarm_C_HasFiltered_Target_in_the_Area_Params
{
	bool                                               TargetLost;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand
struct AStructure_TekAlarm_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode
struct AStructure_TekAlarm_C_BPApplyPinCode_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               appledPinCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TheCustomIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed
struct AStructure_TekAlarm_C_Get_Detect_Area_Adjust_Speed_Params
{
	float                                              AdjustSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay
struct AStructure_TekAlarm_C_ReceiveBeginPlay_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse
struct AStructure_TekAlarm_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere
struct AStructure_TekAlarm_C_UpdateTargetDetectSphere_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox
struct AStructure_TekAlarm_C_UpdateTargetDetectBox_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure
struct AStructure_TekAlarm_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style
struct AStructure_TekAlarm_C_Switch_Target_Detect_Style_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse
struct AStructure_TekAlarm_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries
struct AStructure_TekAlarm_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript
struct AStructure_TekAlarm_C_UserConstructionScript_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange
struct AStructure_TekAlarm_C_MulticastTargetDetectStyleChange_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX
struct AStructure_TekAlarm_C_AdjustTargetDetectBoxDepthX_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY
struct AStructure_TekAlarm_C_AdjustTargetDetectBoxWidthY_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent
struct AStructure_TekAlarm_C_MulticastTargetDetectBoxExtent_Params
{
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ
struct AStructure_TekAlarm_C_AdjustTargetDetectBoxHeightZ_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState
struct AStructure_TekAlarm_C_SignalServerToggleActivateState_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius
struct AStructure_TekAlarm_C_AdjustTargetDetectSphereRadius_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius
struct AStructure_TekAlarm_C_MulticastTargetDetectSphereRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea
struct AStructure_TekAlarm_C_ScanTargetDetectArea_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere
struct AStructure_TekAlarm_C_DrawDebugSphere_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange
struct AStructure_TekAlarm_C_MulticastStructureDetectStyleChange_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent
struct AStructure_TekAlarm_C_MulticastStructureDetectBoxExtent_Params
{
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius
struct AStructure_TekAlarm_C_MulticastStructureDetectSphereRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX
struct AStructure_TekAlarm_C_AdjustStructureDetectBoxDepthX_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY
struct AStructure_TekAlarm_C_AdjustStructureDetectBoxWidthY_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ
struct AStructure_TekAlarm_C_AdjustStructureDetectBoxHeightZ_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius
struct AStructure_TekAlarm_C_AdjustStructureDetectSphereRadius_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha
struct AStructure_TekAlarm_C_CalcuateTargetDetectAlpha_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha
struct AStructure_TekAlarm_C_CalcuateStructureDetectAlpha_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent
struct AStructure_TekAlarm_C_UpdateAreaVisualsVisibilityEvent_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview
struct AStructure_TekAlarm_C_MulticastShowPreview_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound
struct AStructure_TekAlarm_C_MulticastPlayActivationSound_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound
struct AStructure_TekAlarm_C_MulticastPlayDeactivationSound_Params
{
};

// Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm
struct AStructure_TekAlarm_C_ExecuteUbergraph_Structure_TekAlarm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
